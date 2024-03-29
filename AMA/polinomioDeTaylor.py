import numpy as np
import matplotlib.pyplot as plt

# Definición de la función y su derivada
def f(x):
    return np.exp(-x)

def df(x):
    return -np.exp(-x)

# Polinomio de Taylor de primer grado alrededor de x = 1
def taylor_polynomial(x):
    return f(1) + df(1) * (x - 1)

# Visualización de la función original y su aproximación
x_values = np.linspace(0, 2, 100)
y_values = f(x_values)
taylor_values = taylor_polynomial(x_values)

plt.plot(x_values, y_values, label='f(x) = $e^{-x}$')
plt.plot(x_values, taylor_values, label='Polinomio de Taylor (grado 1)', linestyle='--')

# Marcamos el punto de aproximación
plt.scatter([1], [f(1)], color='red', marker='o', label='Punto de aproximación (1, $e^{-1}$)')

plt.title('Aproximación de $e^{-x}$ con Polinomio de Taylor (grado 1)')
plt.xlabel('x')
plt.ylabel('y')
plt.legend()
plt.grid(True)
plt.show()
