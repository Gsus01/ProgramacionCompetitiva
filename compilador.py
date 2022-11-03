import csv
import pandas as pd

df = pd.read_csv('problems.csv')

with open('INDICE.md', 'w') as f:
  for cat in df.categoria.unique():
    f.write(f'# {cat}\n\n')
    f.write(f'<details>\n\n')
    for row in df[df.categoria == cat].itertuples():
      f.write(f'1. {row.nombre} [[solucion](./{row.pagina}/{row.id}) - [enunciado]({row.enlace})] \n')
    f.write(f'\n</details>\n')
    f.write(f'\n')
