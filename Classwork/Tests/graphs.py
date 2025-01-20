import matplotlib.pyplot as plt
import networkx as nx
from tkinter import *
import tkinter as tk
import numpy as np

arr = np.empty((0, 2), dtype=int)

def getEntryValues():
    x = xEntry.get()
    y = yEntry.get()
    xEntry.delete(0, END)
    yEntry.delete(0, END)
    return x, y

def addValues():
    a, b = getEntryValues()
    global arr
    arr = np.append(arr, [(a, b)], axis=0)

def createGraph():
    G1 = nx.Graph()
    G1.add_edges_from(arr)
    nx.draw(
        G1, with_labels = True
    )
    plt.tight_layout()
    plt.show()

root = tk.Tk()
helloLabel = tk.Label(root, text="Please enter the nodes.").grid(column=1, row=1)
xEntry = tk.Entry(root)
xEntry.grid(column=1, row=2)
yEntry = tk.Entry(root)
yEntry.grid(column=2, row=2)
submitButton = tk.Button(root, text="Add values", command=addValues).grid(column=1, row=3)
createGraphButton = tk.Button(root, text="Create graph", command=createGraph).grid(column=1, row=4)
root.mainloop()