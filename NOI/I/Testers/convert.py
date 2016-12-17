#coding:utf-8
import pandas as pd
import sys
input = sys.argv[1]
pd.read_csv(input, encoding='utf8', sep='\t', dtype='unicode').to_excel(input + '.xlsx', sheet_name='sheet1', index=False)
