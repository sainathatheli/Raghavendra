#import python request library

import requests
#Specify the Url we want to scrap the list of indian billionaries.

Link = "https://en.wikipedia.org/wiki/List_of_Indians_by_net_worth"

#convert the webpage to text
Link_text =requests.get(Link).text
#print(Link_text)

#IN order to fetch useful information  convert Link_text (which  is of string datatype) into a
#BeautifulSoup Object.

#import BeautifulSoup library to pull data out of html and xml files.

from bs4 import BeautifulSoup

#to convert Link_text into BeautifulSoup object
 
soup = BeautifulSoup(Link_text,'lxml')

#print(soup)

#with the help of the prettify() function make the indentation proper.

#make the indentation proper

#print(soup.prettify())

#To fetch webpage title, use soup.title

#to take a look at the title of the webpage

#print(soup.title)

#Only string  not the tags
#print(soup.title.string)

#Explore all <a> </a> tags

#print(soup.find_all('p'))
#Again ,just the way we fetched title tags. We will fetch all table tags.

#all_table = soup.find_all('table')

#print(all_table)

#Now fetch all table tags with class name 'wikitable sortable'

our_table = soup.find('table',class_='wikitable sortable')

#print(our_table)

table_links=our_table.find_all('a')

#print(table_links)
#In order to put the title on a list,iterate  over table_links and append on the title using
#the get() function

#put the title into a list
billionaries =[]

for links in table_links:
	billionaries.append(links.get('title'))

#print(billionaries)

#convert billionaries the list into a dataframe using pandas

import pandas as pd

df =pd.DataFrame(billionaries)

# print(df)


#Use the follwoing method to write data into an csv file.

df.to_csv("C:\\Users\\sainath\\Desktop\\listofBillionaries.csv")

print("Data successfully writen into CSV file")




