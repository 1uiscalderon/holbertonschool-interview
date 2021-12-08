#!/usr/bin/python3
"""
You have n number of locked boxes in front of you. Each box is numbered
sequentially from 0 to n - 1 and each box may contain keys to the other boxes.
Write a method that determines if all the boxes can be opened.
"""


def canUnlockAll(boxes):
    """
    boxes is a list of lists
    A key with the same number as a box opens that box
    You can assume all keys will be positive integers
    There can be keys that do not have boxes
    The first box boxes[0] is unlocked
    Return True if all boxes can be opened, else return False
    """
    Keys = [0]
    for key in Keys:
        for boxKey in boxes[key]:
            if boxKey not in Keys and boxKey < len(boxes):
                Keys.append(boxKey)
    if len(Keys) == len(boxes):
        return True
    return False
