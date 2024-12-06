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

def clearGraphNodes():
    global arr
    arr = np.empty((0, 2), dtype=int)
    statusLabel.config(text="Cleared graph data.", fg="green")

def deleteEdge():
    x, y = getEntryValues()
    global arr
    try:  
        x = int(x)
        y = int(y)
        found = np.where(np.all(arr == (x, y), axis=1))
        if found[0].size > 0:
            for i in found[0]:
                arr = np.delete(arr, i, axis=0)
            statusLabel.config(text=f"Cleared edge: ({x}, {y})", fg="green")
        else:
            statusLabel.config(text=f"Edge ({x}, {y}) not found", fg="red")
    except ValueError:
        statusLabel.config(text="Invalid input. Please enter integers.", fg="red")


def addValues():
    a, b = getEntryValues()

    try:
        a = int(a)
        b = int(b)
        global arr
        arr = np.append(arr, np.array([[a, b]]), axis=0)
        statusLabel.config(text=f"Added edge: ({a}, {b})", fg="green")
    except ValueError:
        statusLabel.config(text="Invalid input. Please enter integers.", fg="red")

def createGraph():
    G1 = nx.Graph()
    G1.add_edges_from(arr)
    nx.draw(G1, with_labels=True)
    plt.tight_layout()
    plt.show()

root = tk.Tk()
root.title("Graph Edge Input")

helloLabel = tk.Label(root, text="Enter pairs of nodes to add edges", font=("Helvetica", 14))
helloLabel.grid(column=0, row=0, columnspan=3, padx=20, pady=10)

xEntry = tk.Entry(root, font=("Helvetica", 12))
xEntry.grid(column=0, row=1, padx=10, pady=5)

yEntry = tk.Entry(root, font=("Helvetica", 12))
yEntry.grid(column=1, row=1, padx=10, pady=5)

nodeLabel = tk.Label(root, text="Node 1", font=("Helvetica", 12))
nodeLabel.grid(column=0, row=2, padx=10, pady=5)

nodeLabel = tk.Label(root, text="Node 2", font=("Helvetica", 12))
nodeLabel.grid(column=1, row=2, padx=10, pady=5)

submitButton = tk.Button(root, text="Add Edge", command=addValues, font=("Helvetica", 12), bg="#4CAF50", fg="white", relief="raised")
submitButton.grid(column=0, row=3, columnspan=1, pady=20)

createGraphButton = tk.Button(root, text="Create Graph", command=createGraph, font=("Helvetica", 12), bg="#008CBA", fg="white", relief="raised")
createGraphButton.grid(column=1, row=3, columnspan=1, pady=10)

deleteEdgeButton = tk.Button(root, text="Delete Edge", command=deleteEdge, font=("Helvetica", 12), bg="#111199", fg="white", relief="raised")
deleteEdgeButton.grid(column=0, row=4, columnspan=1, pady=9)

clearGraphButton = tk.Button(root, text="Clear Graph", command=clearGraphNodes, font=("Helvetica", 12), bg="#F00000", fg="white", relief="raised")
clearGraphButton.grid(column=1, row=4, columnspan=1, pady=9)

statusLabel = tk.Label(root, text="", font=("Helvetica", 12))
statusLabel.grid(column=0, row=5, columnspan=2, pady=10)

root.geometry("400x380")
root.resizable(False, False)

root.mainloop()
