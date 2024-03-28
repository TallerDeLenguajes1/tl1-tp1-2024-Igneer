 ### Trabajo Práctico N°1

##2a
- .gitignore es un archivo que especifica qué o cuáles son archivos se deben ignorar.
- No todos los archivos que tenemos dentro del repositorio o vs code son necesarios en el repositorio remoto, por lo qu es necesario omitir datos o archivos de gran importancia, o aquellos que no harán un mejor cambio al funcionamiento en sí.
- Crear el archivo *.gitignore* es tan fácil como hacer click derecho, crear un nuevo archivo y nombrarlo ".gitignore". A partir de ahí escribir el nombre de los archivos que se deseen omitir. Existen tres caracteres especiales para la omisión de archivos:

1. "#": Utilziado para escribir comentarios dentro de .gitignore.
2. "/": Con este se especifica una ruta dentro del programa para omitir.
3. "*": Este caracter, llamado comodín, nos permite usarla como una "propiedad" dentro de las omisiones. Si quisieramos omitir todos los archivos de tipo texto (txt), usamos "*.txt" en la configuración. 