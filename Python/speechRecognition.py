import speech_recognition as sr
import pyttsx3
import webbrowser as web
import random
import time

# Initialize the recognizer 
r=sr.Recognizer()

#Function to convert text to speech
def SpeekTest(command):

    #Initialize the engine
    engine=pyttsx3.init()
    engine.say(command)
    engine.rumAndWait()

    # use the microphone as source for input.
    with sr.Microphone() as source2:

        # wait for a second to let the recognizer
        # adjust  the energy threshold based on 
        # the surrounding noise level
        r.adjust_for_ambent_noise(source2,duration=0.2)

        #listens for the user's input
        audio2=r.listen(source2)

        # Using google to recognize audio
        MyText=r.recognize_google(audio2)
        MyText=MyText.lower()

        print("Did you say"+MyText)
        SpeekTest(MyText)
         
        def main():
            path =""
            r= sr.Recognizer()
            with sr.Microphone() as source:
                r.adjust_for_ambient_noise(source)
                print("please say something")
                audio = r.listen(source)
                print("Recoginizing now.....")

                try:
                    dest = r.recognize_google(audio)
                