using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.Networking;

public class RegistrationMenuManager : MonoBehaviour
{
    //Input fields
    public InputField nameInput;
    public InputField passwordInput;

    //Registrration button
    public Button registerBtn;

    //Login display
    public Text loggedInDisplay;

    //Button sound
    public AudioSource buttonSound;


    private void Start()
    {
        //If player is logged in show stats
        if (DBManager.LoggedIn)
        {
            loggedInDisplay.text = "Player: " + DBManager.username + " Logged in\nHighscore: " + DBManager.highscore;
        }

        //start in the name input field
        nameInput.ActivateInputField();
    }

    //Data to send to log in to database
    [System.Serializable]
    public class DataToSend
    {
        public string Username;
        public string Password;
    }

    //Start the registration request on button click
    public void Register()
    {
        buttonSound.Play();

        DataToSend myData = new DataToSend();
        myData.Username = nameInput.text;
        myData.Password = passwordInput.text;

        string jsonData = JsonUtility.ToJson(myData);

        StartCoroutine(RegistrationRequest("http://localhost/UnityProjects/register.php", jsonData));
    }

    IEnumerator RegistrationRequest(string url, string json)
    {
        UnityWebRequest uwr = UnityWebRequest.Post(url, "POST");
        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(json);
        uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        uwr.SetRequestHeader("Content-Type", "application/json");

        yield return uwr.SendWebRequest();

        //If there is a network error
        if(uwr.isNetworkError)
        {
            Debug.Log("Error While Sending: " + uwr.error);            
        }
        //If there is an error from the php code
        else if(uwr.downloadHandler.text != "0")
        {
            Debug.Log("User Creation Failed Error #" + uwr.downloadHandler.text);
        }
        //On Succsess return to the main menu
        else
        {
            Debug.Log("User Registered");
            SceneManager.LoadScene("Main Menu");
        }
    }

    //Only allow the button to be used if the requirements have been met
    public void VerifyInputs()
    {
        registerBtn.interactable = (nameInput.text.Length > 0 && passwordInput.text.Length >= 3);
    }

    //Sends the player back to the main menu
    public void MainMenu()
    {
        buttonSound.Play();
        StartCoroutine(LoadMainMenu());
    }

    private IEnumerator LoadMainMenu()
    {
        yield return new WaitForSeconds(0.2f);
        SceneManager.LoadScene("Main Menu");
    }
}
