import random

thesaurus = {
    "hot": ['balmy', 'summery', 'tropical', 'boiling', 'scorching'],
    "cold": ['chilly', 'cool', 'freezing', 'frigid', 'polar'],
    "happy": ['content', 'cheery', 'merry', 'jovial', 'jocular'],
    "sad": ['unhappy', 'downcast', 'miserable', 'glum', 'melancholy'],
}

print("Welcome to the Thesaurus!")
print("Words in the thesaurus:", ", ".join(thesaurus.keys()))# Print the words in the thesaurus

word_choice = input("What word would you like to find synonyms for? ")

if word_choice in thesaurus:     # Check if the word is in the thesaurus
    synonym = random.choice(thesaurus[word_choice])
    print( word_choice+ " = "+synonym)
else:
    print("Sorry, the word", word_choice, "is not in the thesaurus.")
view_thesaurus = input("Would you like to see the whole thesaurus? (yes/no) ")
viewlower=view_thesaurus.lower()
if viewlower == "yes":
    for word, synonyms in thesaurus.items():
        print(word, ":", ", ".join(synonyms)) # Display the whole dictionary
else:
    print("Goodbye!")
# OUTPUT:-
# Welcome to the Thesaurus!
# Words in the thesaurus: hot, cold, happy, sad
# What word would you like to find synonyms for? happy
# happy = jovial
# Would you like to see the whole thesaurus? (yes/no) Yes
# hot : balmy, summery, tropical, boiling, scorching
# cold : chilly, cool, freezing, frigid, polar
# happy : content, cheery, merry, jovial, jocular
# sad : unhappy, downcast, miserable, glum, melancholy