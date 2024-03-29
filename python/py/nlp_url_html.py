# -*- coding: utf-8 -*-

import nltk # Natural Language Toolkit
import string # Works with strings

from nltk.tokenize import sent_tokenize, word_tokenize # Word and sentence tokenizer
from nltk.corpus import stopwords # Works with stopwords

nltk.download('punkt') # Helps to divides a text into a list of sentences
nltk.download('stopwords') # Helps to get stopwords

# Example of word tokenizing

data = "Example of a sentence, which we will separate the words"
words = word_tokenize(data)
print(words)

# Getting the working path

import os
print(os.getcwd())

# File reading and word tokenizing

lyrics = open('futureTense.txt', "r")
x = lyrics.read()
lyrics.close()
print(x)

words = word_tokenize(x)
words

# Filtering all stopwords and getting the punctuactions

wordsFiltered = []
stopWords = set(stopwords.words('english'))
punctuations = list(string.punctuation)
for w in words:
    if w not in stopWords and w not in punctuations:
        wordsFiltered.append(w)    
print(wordsFiltered)

# Retired terms

terms = set(words)
terms = list(terms)

# Library to work with url opening

import urllib.request
response = urllib.request.urlopen('https://www.letras.mus.br/oasis/28995/')
html = response.read()
print (html)

# Library to filter HTML

from bs4 import BeautifulSoup 
import urllib.request 
response = urllib.request.urlopen('https://www.letras.mus.br/oasis/28995/')

html = response.read() 
soup = BeautifulSoup(html,"html5lib") 
text = soup.get_text(strip=True) 
tokens = [t for t in text.split()] 
print (tokens)

soup = BeautifulSoup(html, "lxml")
text = soup.find(id="js-lyric-cnt").text

text

words = word_tokenize(text)
words

wordsFiltered = []

stopWords = set(stopwords.words('english'))
punctuations = list(string.punctuation)
for w in words:
    if w not in stopWords and w not in punctuations:
        wordsFiltered.append(w)    
print(wordsFiltered)