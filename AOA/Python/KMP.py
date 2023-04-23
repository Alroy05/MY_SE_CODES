def kmpsearch(txt,pat):
    m=len(pat)
    n=len(txt)
    lps=[0]*m
    computelps(pat,m,lps)
    i=0
    j=0
    
    while(i<n):
        if(pat[j]==txt[i]):
            i+=1
            j+=1
        
        if(j==m):
            print("Pattern found at index: "+str(i-j))
            j=lps[j-1]
        elif(i<n and pat[j]!=txt[i]):
            if(j!=0):
                j=lps[j-1]
            else:
                i+=1

def computelps(pat,m,lps):
    len=0
    lps[0]=0
    i=1
    while(i<m):
      if(pat[i]==pat[len]):
        len+=1
        lps[i]=len
        i+=1
      else:
        if(len!=0):
            len=lps[len-1]
        else:
            i+=1
        
txt = input("Enter the text string: ")
pat = input("Enter the pattern")
kmpsearch(txt,pat)