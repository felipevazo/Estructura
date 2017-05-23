# Estructura14/3

- PRUEBAS: 7/4,19/5,30/6!!!!! 
- ENTREGAR TAREAS A LA HORA!
- LIBROS: R.Lafore "Data Structures and Algorithms in Java (2nd. Ed.) EN CAMPUS VIRTUAL
- APPLET -> app en navegadors

# Que son Estructuras de datos?
- definen la forma en las que se almacenan los datos!
- Las mas comunes: arreglos, listas enlazadas, pilas, etc.
- Algoritmos -> procedimientos para manipular datos en estructuras.

# tipos de problemas
- almacenamiento 
- herramientas de programasound
- Modelamiento.

# Fortalezas vs debilidades
- MIRAR PPT!, mushas cosas

# Estructuras 17/3
- INSTALAR ECLIPSE
- Compilar: Cuando se pasa codigo a lenguaje maquina

# ARREGLOS
- Estrucutras de datos mas usadas
- Borrar implica ignorar
- Complejidad( Insert=1, Buscar N/2, Borrar N/2 y  N/2 respectivamente, SOLO CUANDO NO HAY DUPLICADOS), N para duplicatres
- Mirar ejemplox ox ox ox ox ox 

# MIRAR EJERCICIOS PROPUESTOS!!!!!!!!!!!!!!!!!ª!

# Ordenamiento
- Simple
  - Tarea Comun
    - Burbuja SUMATORIA N PRIMEROS NAMBERS, orden n2
    - Seleccion  Al verre, elige menor recorriendo array, y lo tira al principiox
    - Insercion Casi 2 veces mas rapido que burbuja, pesca 1, mueve a aux y compara izquierda hasta encontrar menor
    
# TAREA, heredar las clases existentes, otra clase para busbuja, donde yo inserte arreglo completo


# Ordenamiento Avanzado
# AlgoRythmics
# QuickSort

- Juan quicksort -> CHarles A. Hoare, 1962
- PUNTO MEDIO ES EL UNICO ORDENADO
- PIVOTE -> VALOR DENTRO DEL ARREGLO
- LUEGO SE PERMUTA PIVOTE POR EL VALOR MAS A LA IZQUIERDA DEL ARREGLO DE LA DERECHA
# Particionamiento
 - Grupo de datos desordenados, divide en 2 grupos, dependiendo un divisor( menores que divisor y mayores que divisor)
 - primer divisor al azar
 - Tomo dos pivotes
 


# ---------------------------------------------------------------


# Prueba 2
# Pilas y Colas

# Pila
- Top, se puede sacar, el resto gg
  - Operaciones basicas
  - Push(apilar)
  - Pop(desapilar)
  - peek(cima, leer dato)
  
# Cola
- FIFO!
- Rear -> Trasera
- Front -> Delantera
- Push -> entra por atras
- Pop -> sale por delante3

# Cola Doblemente Terminada
 - Generica
 
# Cola de prioridah
- agregar orden N
- Quitar orden 1
- huevos con aceite   


# ALT+SHIFT+F = MAGIA DE ORDENAMIENTO BONI BONI 


# --------------------------------------------------------

# Recursion

- Metodos llamandose a si mismos
- conceptual para solucionar problemas!

# Caracteristicas
 -  Se llama a si mismo
 - Cuando lo hace, se busca reducir el problema 
 - Existe cierta version del problema para retornar un valor sin recursividad
 
 - Recursividad guarda valores en pilas de sistema
 
# Ordenamiento Por Mezcla

- MergeSort -> Recursivo
- O(NlogN)
- Facil de implementar
- Requiere otro arreglo adicional en memoria, de tamaño N 
- MIRAR ALGORYITHMICS

http://stackoverflow.com/questions/741900/binary-trees-question-checking-for-similar-shape

# - - - - -- - - - - - - - - - - - - -  - - 
# Arboles Rojo/Negro
- Balanceado: Lado izq casiIgual Lado der

- en los arboles RB (red black) se busca mantener balance durante insercion y borrado
- Si no se logra se reestructura
- Caracteristicas
  - Los nodos poseen c olores (atributo)
  - Hay reglas de inserción y eliminacion para conservar distribucion de colores
- Reglas
  - Cada nodo puede ser rojo o negro
  - Raiz -> SIEMPRE NEGRA
  - Si nodo es rojo, hijos negros
  - Todas las rutas desde raiz a hojas o a un hijo nulo, tiene la misma cantidad de nodos negros
    - Hijo nulo: Potencial hijo izquierdo de un nodo con solo un hijo derecho (coco faltante)
    
    - Cambiar color o rotar son soluciones
