# Importing Arduino_Master module

from Arduino_Master import 



# collecting data
data=filter(ardata(8,squeeze=False,dynamic=True,msg="DATA",lines=50),expected_type='num',limit=[0,5])





#classifying data based on conclusion
info=[]
for i in range(len(data)):
    intensity=data[i]
    if intensity <= 1:
        info.append("Too dark")
    elif intensity > 1 and intensity<2:
        info.append('dark')
    elif intensity>=2:
        info.append('Light ON')




# Plotting the Graph.
compGraph(data,info,stl='dark_background',label1='Light Intensity',label2='State')
