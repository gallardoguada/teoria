#include <stdio.h>
#include <string.h>

int main() {
	int tipoVenta, tipoPago, cantidadProductos, i;
	float precioProducto;
	float subtotal = 0;
	float descuento = 0; 
	float propina = 0;
	float costoEnvio = 0;
	float totalFinal;
	char tipoServicio[20], tipoPagoStr[20], nombreProducto[50];
	
	printf("Ingrese el tipo de venta: \n"); 
	printf("1: En el lugar: \n ");
	printf("2: Delivery: \n ");
	scanf("%d", &tipoVenta);
	
	switch (tipoVenta) {
	case 1: 
		strcpy(tipoServicio, "En el lugar: \n");
		printf("Ingrese la cantidad de productos consumidos: ");
		scanf("%d", &cantidadProductos);
		
		for (i = !0; i < cantidadProductos; i++) {
			printf("Ingrese el nombre del producto %d: ", i + 1);
			scanf("%s", nombreProducto);
			printf("Ingrese el precio del producto %d: ", i + 1);
			scanf("%f", &precioProducto);
			subtotal += precioProducto;
		}
		
		printf("Ingrese el tipo de pago (1: Efectivo, 2: Tarjeta): ");
		scanf("%d", &tipoPago);
		
		switch (tipoPago) {
		case 1: 
			strcpy(tipoPagoStr, "Efectivo");
			descuento = subtotal * 0.15;
			propina = (subtotal - descuento) * 0.10;
			break;
		case 2: // Pago con tarjeta
			strcpy(tipoPagoStr, "Tarjeta");
			propina = subtotal * 0.10;
			break;
		default:
			printf("Opción de pago inválida.\n");
			return 1;
		}
		break;
		
	case 2: // Servicio por delivery
		strcpy(tipoServicio, "Delivery");
		printf("Ingrese la cantidad de productos consumidos: ");
		scanf("%d", &cantidadProductos);
		
		for (i = 0; i < cantidadProductos; i++) {
			printf("Ingrese el nombre del producto %d: ", i + 1);
			scanf("%s", nombreProducto);
			printf("Ingrese el precio del producto %d: ", i + 1);
			scanf("%f", &precioProducto);
			subtotal += precioProducto;
		}
		
		printf("Ingrese el tipo de pago (1: Transferencia/Débito, 2: Crédito): ");
		scanf("%d", &tipoPago);
		
		switch (tipoPago) {
		case 1: // Pago por transferencia o débito
			strcpy(tipoPagoStr, "Transferencia/Débito");
			descuento = subtotal * 0.15;
			costoEnvio = subtotal * 0.10;
			break;
		case 2: // Pago con tarjeta de crédito
			strcpy(tipoPagoStr, "Crédito");
			costoEnvio = subtotal * 0.15;
			break;
		default:
			printf("Opción de pago inválida.\n");
			return 1;
		}
		break;
		
	default:
		printf("Tipo de venta inválido.\n");
		return 1;
	}
	
	totalFinal = subtotal - descuento + propina + costoEnvio;
	
	printf("\n==================== FACTURA ====================\n");
	printf("Tipo de Servicio: %s\n", tipoServicio);
	printf("Tipo de Pago: %s\n", tipoPagoStr);
	printf("-------------------------------------------------\n");
	printf("%-30s %10s\n", "Producto", "Precio");
	printf("-------------------------------------------------\n");
	for (i = 0; i < cantidadProductos; i++) {
		printf("Producto %d", i + 1); // No guardamos el nombre para evitar estructuras complejas
		printf("%27.2f\n", 0.0f);      // Solo mostramos el precio ingresado (no guardado)
	}
	printf("-------------------------------------------------\n");
	printf("%-30s %10.2f\n", "Subtotal", subtotal);
	if (descuento > 0) {
		printf("%-30s -%9.2f\n", "Descuento", descuento);
	}
	if (propina > 0) {
		printf("%-30s +%9.2f\n", "Propina", propina);
	}
	if (costoEnvio > 0) {
		printf("%-30s +%9.2f\n", "Costo de Envío", costoEnvio);
	}
	printf("-------------------------------------------------\n");
	printf("%-30s %10.2f\n", "TOTAL A PAGAR", totalFinal);
	printf("=================================================\n");
	
	return 0;
}
