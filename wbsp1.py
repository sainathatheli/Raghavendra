from selenium import webdriver
from bs4 import BeautifulSoup
import pandas as pd

driver = webdriver.Chrome()
products=[] #store name of the product
prices=[] #store price of the product
ratings=[] #store rating of the product

driver.get("https://www.amazon.in/Lenovo-IdeaPad-39-62cm-Warranty-82RK0062IN/dp/B0B4KD52ZC/ref=sr_1_1_sspa?qid=1683473283&refinements=p_89%3ALenovo&rnid=3837712031&s=computers&sr=1-1-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGZfYnJvd3Nl&th=1")
content =driver.page_source
soup = BeautifulSoup(content)
#class="a-price-whole"
#https://www.amazon.in/s?bbn=976393031&rh=n%3A976392031%2Cn%3A1375424031&dc&qid=1683474476&rnid=976393031&ref=lp_976393031_nr_n_4


price =soup.find('span',attrs={'class':'a-price-whole'})
rating = soup.find('span',attrs={'class':'a-icon-alt'})

print(price.text)
print(rating.string)


