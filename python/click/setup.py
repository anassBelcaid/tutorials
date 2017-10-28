from setuptools import setup

setup(
      name='TestClick',
      version="0.1",
      py_modules=[
      'Hello'
      ],
      install_requires=['Click'],
      entry_points='''
      [console_scripts]
      hello=Hello:cli
      '''
)
