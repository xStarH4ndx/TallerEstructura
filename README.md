# TallerEstructura

Linea para compilar:
g++ -o mi_programa App.cpp Clases/Sistema.cpp Clases/Usuario.cpp Clases/Software.cpp Clases/Administrador.cpp Clases/Normal.cpp Clases/Juegos.cpp Clases/Ofimatica.cpp Clases/Produccion.cpp Clases/Navegador.cpp Clases/Seguridad.cpp

Linea para Ejecutar:
./mi_programa

Clases Creadas:
-Usuario: Representa al usuario que se va a registrar, es la clase "Padre" (este posee atributos de una persona: nombre,contraseña y edad).
-Administrador: Representa al usuario administrador, clase hija de Usuario, este posee atributos completos del usuario, es decir, posee (además de los predeterminados del usuario) correo y un AccederLog.
-Normal: Representa un usuario normal, clase hija de Usuario, el cual posee los atributos del usuario, añadiendole correo.

-Software: Representa un software en general, posee atributos de "nombre, developer, clasificación de edad y precio". Además posee una lista de usuarios que utilizan algún software.
