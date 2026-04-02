### TRABAJO PRACTICO 1 

breve respuestas solicitada para Investigar el archivo .gitignore 

## ¿Qué es .gitignore?

Es un archivo de Git que sirve para indicar qué archivos o carpetas **NO deben ser rastreados**  por Git.
Es decir, Git ignora esos archivos y no los sube al repositorio.

#¿Por qué es conveniente incluirlo?

Porque evita subir cosas innecesarias o problemáticas:

-  Archivos temporales (.log, .tmp)
- Dependencias (node_modules/)
- Archivos del sistema (.DS_Store)
- Configuraciones personales
- Datos sensibles (claves, contraseñas)

Beneficios:

- Repo más limpio
- Menos peso
- Mayor seguridad
- Evita conflictos entre desarrolladores

# ¿Cuándo se debe hacer?

Crearlo desde el inicio del proyecto
Pero también podés agregarlo después si:
- Notaste que estás subiendo archivos innecesarios 
- Querés ordenar el repositorio

# ¿Cómo se configura .gitignore?

Es un archivo de texto donde escribís patrones de lo que querés ignorar. luego de haberlo editado guardas los cambios con la terminación del archivo .gitignore

_Ejemplo de configuracion dentro del archivo_:

# Ignorar archivos .log
*.log

# Ignorar carpeta node_modules
node_modules/

# resolucion del ejercicio "codigo_sin_funcionar":


- linea 14 "Agregue & para la asignacion del valor en la variable"
- linea 22 y linea 19  error de sintaxis ";"

- llamado a libreria Stdio para usar funciones Scanf y printf

- Agregado a la funcion duplicar_numero el tipo int en cez de void. (tambien se podria haber resulto el problema mediante punteros). 