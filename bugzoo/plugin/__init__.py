def interface(m):
    """
    Decorator used to specify that a given Plugin method should be treated as
    an interface to that plugin.
    """
    m.is_interface = True
    return m
