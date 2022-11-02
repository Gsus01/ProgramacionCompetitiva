import csv
import pandas as pd

df = pd.read_csv('problems.csv')

# Take the list with all the categories

# Create a dictionary with the categories as keys and the problems as values
with open('INDICE.md', 'w') as f:
  for cat in df.categoria.unique():
    f.write(f'# {cat}\n\n')
    f.write(f'<details>\n\n')
    for row in df[df.categoria == cat].itertuples():
      f.write(f'1. {row.nombre} [[solucion](./{row.pagina}/{row.id}) - [enunciado]({row.enlace})] \n')
    f.write(f'\n</details>\n')
    f.write(f'\n')


# Write the result in the file INDICES.md
# with open('INDICES.md', 'w') as f:



# # Read the file "Origen.md" 
# with open("Origen.md", "r") as file:
#     lines = file.readlines()
#     # print(lines)
#     for i, line in enumerate(lines):
#         for cat in categories:
#             if line.startswith(f'### Listado problemas de {cat}'):
#                 print("hola")


# Write the file
# with open('Origen.md', 'w') as f:
#     f.writelines(lines)
