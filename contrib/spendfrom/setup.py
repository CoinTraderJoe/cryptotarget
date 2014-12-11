from distutils.core import setup
setup(name='crtspendfrom',
      version='1.0',
      description='Command-line utility for cryptotarget "coin control"',
      author='Gavin Andresen',
      author_email='gavin@cryptotargetfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
