from pytube import YouTube
from pytube import Playlist
from sys import argv


w=input("v for video\np for playlist")

link = input("Paste the link")
if w == "v":
    yt = YouTube(link)
    print("Title: ",yt.title)
    print("View: ",yt.views)
    yd = yt.streams.get_highest_resolution()
    yd.download('D:\YtDownload')
elif w == "p":
    p = Playlist(link)
    print(f'Downloading: {p.title}')
    for video in p.videos:
        vid=video.streams.get_highest_resolution()
        vid.download('D:\YtDownload')
else:
    print("Invalid input!!")
   


    
    









