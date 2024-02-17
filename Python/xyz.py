import random
import speech_recognition as sr
import pyttsx3

# List of therapy phrases
therapy_phrases = [
    "apple",
    "ball",
    "cat",
    "dog",
    "elephant"
]

# Function to randomly select a therapy phrase
def get_random_phrase():
    return random.choice(therapy_phrases)

# Function to convert text to speech
def speak(text):
    engine = pyttsx3.init()
    engine.say(text)
    engine.runAndWait()

# Function to simulate speech therapy session
def speech_therapy():
    print("Welcome to the speech therapy session!")
    print("Let's start with a warm-up exercise.")

    # Warm-up exercise
    phrase = get_random_phrase()
    print("Repeat after me:")
    speak(phrase)

    # User's response
    recognizer = sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening...")
        audio = recognizer.listen(source)

    # Convert speech to text
    try:
        response = recognizer.recognize_google(audio)
        print("Your response:", response)
    except sr.UnknownValueError:
        print("Sorry, I could not understand your response.")
        return
    except sr.RequestError:
        print("Sorry, there was an issue with the speech recognition service.")
        return

    # Check user's response
    if response.lower() == phrase.lower():
        print("Great job! Your pronunciation was perfect.")
        speak("Great job! Your pronunciation was perfect.")
    else:
        print("Hmm, it seems like you had some difficulty. Let's try again.")
        speak("Hmm, it seems like you had some difficulty. Let's try again.")

    print("Now let's move on to the next exercise.")

    # More exercises...
    # Add your exercises and logic here

    print("Congratulations! You have completed the speech therapy session.")

# Run the speech therapy session
speech_therapy()