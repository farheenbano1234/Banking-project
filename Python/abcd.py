import speech_recognition as sr

def recognize_speech():
    # Create a recognizer object
    recognizer = sr.Recognizer()

    with sr.Microphone() as source:
        print("Speak a word:")
        audio = recognizer.listen(source)

    try:
        # Use Google Speech Recognition to convert speech to text
        text = recognizer.recognize_google(audio)
        print("You said:", text)
        return text
    except sr.UnknownValueError:
        print("Sorry, could not understand audio.")
    except sr.RequestError as e:
        print("Could not request results from Google Speech Recognition service; {0}".format(e))

def compare_pronunciation(word, target_word):
    if word.lower() == target_word.lower():
        print("Correct pronunciation!")
    else:
        print("Incorrect pronunciation. The correct word is:", target_word)

def pronunciation_trainer(target_word):
    print("Target word:", target_word)
    while True:
        input("Press Enter to start recording...")
        spoken_word = recognize_speech()
        compare_pronunciation(spoken_word, target_word)
        print()

# Example usage
target_word = "banana"
pronunciation_trainer(target_word)