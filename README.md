# TallerEstructura

-----------------LINEAS DE COMPILACIÓN Y EJECUCIÓN------------------------
Linea para compilar:
g++ -o mi_programa App.cpp Clases/Sistema.cpp Clases/Usuario.cpp Clases/Software.cpp Clases/Administrador.cpp Clases/Normal.cpp Clases/Juegos.cpp Clases/Ofimatica.cpp Clases/Produccion.cpp Clases/Navegador.cpp Clases/Seguridad.cpp

Linea para Ejecutar:
./mi_programa
-----------------------OBJETOS UTILIZADOS EN EL SISTEMA (BASE DE DATOS)------------------------
---------USUARIOS-----------
1)Administrador admin("Bruno","123",22,"cAdmin","si")= Se crea un objeto tipo Administrador, el cual es una clase hija de Usuario, con el nombre "Bruno", contraseña "123", edad 22, código de administrador "cAdmin" y accederLog "si". Se añade a la lista de Usuarios.

2)Bucle para Usuarios (x4):
Usuario kid("kid"+to_string(i),"123",14)= Se crea un objeto tipo Usuario con el nombre "kidX", contraseña "123" y edad 14, donde X es el valor de la variable de bucle i. Se añade a la lista de Usuarios.

3)Bucle para Usuarios (x10):
Normal user("Normal"+ to_string(j),"123",18,"cNormal")= Se crea un objeto tipo Normal, una clase hija de Usuario, con el nombre "NormalX", contraseña "123", edad 18 y código de usuario normal "cNormal", donde X es el valor de la variable de bucle j. Se añade a la lista de Usuarios.

--------SOFTWARES------
4)Bucle para Juegos (x20):
Juegos("Juego1-"+genero,"Developer1",12,40,genero)= Se crea un objeto tipo Juegos con un nombre basado en el género, desarrollado por "Developer1", con una edad mínima de 12, duración de 40 horas y el género proporcionado. Se añade a la lista de Juegos.
Juegos("Juego2-"+genero,"Developer2",16,60,genero)= Similar al anterior, pero con un nombre diferente y desarrollado por "Developer2".

5)Bucle para Juegos (x5):
Juegos("Juegos18-"+to_string(i),"Developer-"+to_string(i),18,80,"Adultos")= Se crean objetos tipo Juegos para adultos con nombres distintos, desarrollados por diferentes desarrolladores y una edad mínima de 18. Se añaden a la lista de Juegos.

6)Ofimatica("Word", "Microsoft", 0, 99, 0) = Se crea un objeto tipo Ofimatica con el nombre "Word", desarrollado por "Microsoft", sin restricciones de edad, precio de 99 y sin calificación. Se añade a la lista de Ofimatica.

7)Bucle para Produccion (x4):
Produccion("VideoMaker", "Developer1", 18, 150, "video") = Se crea un objeto tipo Produccion para la creación de videos con el nombre "VideoMaker", desarrollado por "Developer1", una edad mínima de 18, un precio de 150 y el tipo de producción "video". Se añade a la lista de Produccion.

8)Bucle para Navegador (x2):
Navegador("Chrome", "Google", 0, 0) = Se crea un objeto tipo Navegador con el nombre "Chrome", desarrollado por "Google", sin restricciones de edad y sin precio. Se añade a la lista de Navegador.

9)Bucle para Seguridad (x6):
Seguridad("Software-"+to_string(i), "Desarrollador-"+to_string(i), 18, 50, tipoMalwares[i-1]) = Se crean objetos tipo Seguridad con nombres distintos, desarrollados por diferentes desarrolladores, una edad mínima de 18, un precio de 50 y tipos de malware diferentes. Se añaden a la lista de Seguridad.

10)Bucle para Social (x2):
Social("FaceCarpet","YouCrosoft",18,20) = Se crea un objeto tipo Social con el nombre "FaceCarpet", desarrollado por "YouCrosoft", una edad mínima de 18 y un límite de amigos de 20. Se añade a la lista de Social.
Social("MiTube","Gugul",13,0) = Se crea otro objeto tipo Social con el nombre "MiTube", desarrollado por "Gugul", una edad mínima de 13 y sin límite de amigos. Se añade a la lista de Social.

------------------Clases Creadas-------------------------:
-App: Es la clase que tiene el main.
-Sistema: Es la clase que actúa como una interfaz, esta pobla la base de datos y otras labores. Se utiliza para limpiar la App, para que no esté desordenada. 

-Usuario: Representa al usuario que se va a registrar, es la clase "Padre" (este posee atributos de una persona: nombre,contraseña y edad).
-Administrador: Representa al usuario administrador, clase hija de Usuario, este posee atributos completos del usuario, es decir, posee (además de los predeterminados del usuario) correo y un AccederLog.
-Normal: Representa un usuario normal, clase hija de Usuario, el cual posee los atributos del usuario, añadiendole correo.

-Software: Representa un software en general, posee atributos de "nombre, developer, clasificación de edad y precio". Además posee una lista de usuarios que utilizan algún software.
-Juegos: Representa un software de Juegos. Tiene atributos como nombre, desarrollador, edad mínima, duración y género. Se añade a la lista de Juegos.
-Ofimatica: Representa un software de ofimática. Tiene atributos como nombre, desarrollador, restricciones de edad, precio y calificación. Se añade a la lista de Ofimatica.
-Produccion: Representa un software de producción multimedia. Tiene atributos como nombre, desarrollador, edad mínima, precio y tipo de producción. Se añade a la lista de Produccion.
-Navegador: Representa un software de navegador. Tiene atributos como nombre, desarrollador y restricciones de edad. Se añade a la lista de Navegador.
-Seguridad: Representa un software de seguridad. Tiene atributos como nombre, desarrollador, edad mínima, precio y tipo de malware. Se añade a la lista de Seguridad.
-Social: Representa una aplicación de redes sociales. Tiene atributos como nombre, desarrollador, edad mínima y límite de amigos. Se añade a la lista de Social.