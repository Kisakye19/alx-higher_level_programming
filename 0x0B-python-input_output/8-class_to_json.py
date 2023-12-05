
dule for class_to_json method.
"""


def class_to_json(obj):
    """
        returns dictionary representation with simple data structure.
    """
    return obj.__dict__
