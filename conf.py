"""Sphinx configuration.

To learn more about the Sphinx configuration for technotes, and how to
customize it, see:

https://documenteer.lsst.io/technotes/configuration.html
"""

from documenteer.conf.technote import *  # noqa: F401, F403

rst_epilog = """
.. |reg|    unicode:: U+000AE .. REGISTERED TRADEMARK SIGN
    :ltrim:
.. |clover|    unicode:: U+2318 .. MACOS CLOVER
.. |times|    unicode:: U+00D7 .. MULITPLICATION SIGN
.. |divide|    unicode:: U+00F7 .. DIVISION SIGN
"""

extensions = [
    'sphinx.ext.todo',
]

"""todo extension options"""

todo_include_todos = 0
