#!/usr/bin/env python
# coding: utf-8

# In[1]:


print("First Line\nSecond Line\nThird Line")


# In[14]:


a = complex(2,3)
print(type(a))
print(a.real,a.imag)
print(a.conjugate())
print(abs(a))


# In[33]:


s = "Hello"
print(s[1:4])
print(s[2:5])
print(s[0:3])


# In[34]:


s = "Hello"
print(s.replace("Hello","Help!"))


# In[35]:


l1=[34,46,67]
l2=[23,56,98]
print(l1+l2)


# In[40]:


l=[1,2,3,"apple",[12,"orange"]]
print(l)
l[4][1]="pineapple"
print(l)


# In[45]:


l=[1,2,3,"apple",[12,"orange"]]
print(l)
l[4][1]="pineapple"
print(l)
if "apple" in l:
  print("Apple is present")
else:
  print("Apple is not present")


# In[55]:


l=[1,2,3,4,"apple"]
print(l)
l.append("orange")
print(l)
l.insert(1,"six")
print(l)
l.remove(4)
print(l)
l.remove(3)
print(l)


# In[58]:


factors=[1,2,5,10]
s="Hello"
print(factors[0],factors[0:1])
print(s[0],s[0:1])


# In[61]:


L=["now","on","spaces"]
print("'"+L[0],L[1],L[2]+"'")


# In[63]:


firstName = " Alroy"
lastName = "Pereira"
print(firstName+" "+lastName)


# In[64]:


oddList = [1,3,5,7,9,11,13,15]
for oddNum in oddList:
  print(oddNum)


# In[65]:


mylist=[1,2,3,4,5]
copylist=mylist
mylist.append("Apple")
print(copylist)
print(mylist)


# In[67]:


mylist=[1,2,3,4,5]
copylist=mylist[:]
mylist.append("Apple")
print(mylist)
print(copylist)


# In[69]:


Cars=["bmw","toyota","audi","maruti"]
Cars.sort();
print(Cars)


# In[71]:


Cars=["bmw","toyota","audi","maruti"]
Cars.sort();
Cars.reverse();
print(Cars)


# In[73]:


Cars=["bmw","toyota","audi","maruti"]
print(sorted(Cars))
print(Cars)


# In[74]:


Cars=["bmw","toyota","audi","maruti"]
Cars.reverse()
print(Cars)


# In[ ]:




