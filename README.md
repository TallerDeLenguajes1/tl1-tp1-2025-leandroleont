[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)

# TP01-Taller1

## León Décima, Leandro Alberto

### ¿Qué es el archivo .gitignore? 📋

El archivo _**.gitignore**_ es un archivo utilizado en proyectos gestionados con Git para especificar qué archivos o directorios deben ser ignorados por el sistema de control de versiones. Esto significa que los archivos o directorios mencionados en este archivo no se añadirán al repositorio, incluso si están presentes en el directorio de trabajo del proyecto.

### ¿Por qué es conveniente incluir un archivo .gitignore? 📌

- Evitar el seguimiento de archivos innecesarios: Hay archivos que no tienen relevancia para el proyecto, como los generados por el sistema operativo (archivos de configuración, cachés), dependencias de la compilación, logs, o archivos temporales. Incluir estos archivos en el repositorio no solo hace que crezca innecesariamente el tamaño del repositorio, sino que también puede hacer que se mezclen con los archivos importantes.

- Mantener el repositorio limpio: El archivo _**.gitignore**_ ayuda a mantener el repositorio organizado y asegura que solo los archivos relevantes sean seguidos por Git, lo que facilita la colaboración con otros desarrolladores.

- Seguridad: Algunos archivos pueden contener información sensible, como credenciales de acceso, configuraciones específicas de cada usuario, o claves privadas. Ignorar estos archivos evita que sean accidentalmente subidos a un repositorio público o compartido.

- Evitar conflictos de dependencias: En el caso de proyectos que usen dependencias externas (como Node.js, Python, etc.), el archivo _**.gitignore**_ puede evitar que las carpetas de dependencias se suban al repositorio, dado que estas pueden ser fácilmente restauradas con un comando de instalación.

### ¿Cuándo se debe hacer? ✒️

El archivo _**.gitignore**_ debe ser creado al inicio del proyecto, antes de realizar el primer commit, para evitar que archivos no deseados se registren en el repositorio. Sin embargo, si ya se ha comenzado un proyecto y se detectan archivos no deseados, también se puede crear o modificar el archivo .gitignore en cualquier momento. Es importante tener en cuenta que, si un archivo ya está siendo seguido por Git (es decir, ya fue commiteado), añadirlo a .gitignore no hará que deje de ser rastreado, a menos que se elimine del repositorio de manera explícita.

### ¿Cómo configuraría el archivo .gitignore?
El archivo .gitignore está compuesto por una lista de patrones que indican qué archivos y carpetas deben ser ignorados, y depende de cada proyecto decidir cualés archivos conviene ignorar, siguiendo los lineamientos mencionados anteriormente de cuando es conveniente usar esta herramienta.