# Herramientas Computacionales
Parcial Final Herramientas Computacionales.


### Problema 1
Para recuperarse un poco del tiempo en cuarentena, las cafeterias de la universidad se encuentran dando descuentos a la comunidad estudiantil y dependiendo si es estudiante o profesor, tienen descuentos diferentes. Se desea saber entonces por cada compra cuánto debe pagar el usuario en caja. Para ello:
- Pida por teclado la siguiente información para el cliente: c´edula y rol: profesor o estudiante
- Registrar el producto a comprar: código producto, cantidad de unidades y precio del producto. (un solo producto, varias unidades, por ejemplo: producto 076: gaseosa, 3 unidades)
- Los descuentos están dados de la siguiente forma: los estudiantes tienen un 50 % de descuento mientras que los profesores tienen un 20 % de descuento

### Respuestas punto B
Las respuestas se encuentran en el siguiente [archivo](Solucion_punto_b.txt)

### Algoritmo Solución
La solucion se encuentra en el siguiente [archivo](tienda.c)
##### Entradas
- Cedula y Rol de la persona
- Codigo producto a comprar
- Cantidad de unidades
- Precio del producto

##### Salidas
Se debera imprimir el valor a pagar por sus productos de la siguiente forma:
- "El **Rol** con cedula **Numero**, debe pagar **Valor** por el producto **Codigo**"

##### ¿Cómo se calcula?
Despues de recibir los datos del cliente (Cedula,rol, CodProducto,Cantidad), se calcula el precio total de la compra usando el precio del producto, luego este se multiplica por la cantidad escogida. Despues, este valor se multiplica por el porcentaje de descuento que aplique de acuerdo con el rol del cliente y este valor se guarda. Por ultimo, al precio total se le resta el valor de descuento previmante calculado y se imprime el resultado de la orden de compra.
