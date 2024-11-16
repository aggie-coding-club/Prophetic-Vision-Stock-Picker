#importing pandas as pd 
import pandas as pd 

name = input()
# Read and store content 
# of an excel file


# Write the dataframe object 
# into csv file 
read_file = pd.read_excel("Stocks/" + name + "/" + name + "_BS.xls")
read_file.to_csv ("Stocks/" + name + "/" + name + "_BS.csv", 
				index = None, 
				header=True)
df1 = pd.DataFrame(pd.read_csv("Stocks/" + name + "/" + name + "_BS.csv"))


read_file = pd.read_excel("Stocks/" + name + "/" + name + "_CF.xls") 
read_file.to_csv ("Stocks/" + name + "/" + name + "_CF.csv", 
				index = None, 
				header=True) 
df2 = pd.DataFrame(pd.read_csv("Stocks/" + name + "/" + name + "_CF.csv"))

read_file = pd.read_excel("Stocks/" + name + "/" + name + "_IS.xls") 
read_file.to_csv ("Stocks/" + name + "/" + name + "_IS.csv", 
				index = None, 
				header=True) 
df3 = pd.DataFrame(pd.read_csv("Stocks/" + name + "/" + name + "_IS.csv"))
	
# read csv file and convert 
# into a dataframe object 

# show the dataframe 
df1
df2
df3
