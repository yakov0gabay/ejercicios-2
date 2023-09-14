from itertools import combinations

distancias = [50, 55, 57, 58, 60]
limite_millas = 174
num_pueblos_a_visitar = 3
mejor_suma = 0
mejores_pueblos = []

combinaciones_pueblos = list(combinations(distancias, num_pueblos_a_visitar))

for combinacion in combinaciones_pueblos:
    suma_actual = sum(combinacion)
    if suma_actual <= limite_millas and suma_actual > mejor_suma:
        mejor_suma = suma_actual
        mejores_pueblos = list(combinacion)

print("Las distancias elegidas son:", mejores_pueblos)
print("La suma de distancias es:", mejor_suma, "millas")
