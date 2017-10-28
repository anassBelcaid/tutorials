
import click

@click.command()
@click.option('--string',default="world",help='message printed')
@click.option('--repeat',default=1,help='how many times it repeats')
@click.argument("out",type=click.File('w'),default="-",required=False)
def cli(string,repeat,out):
  """
  This script print the hello world
  """
  click.echo(out)
  for i in range(repeat):
    print("Hello %s"%string)