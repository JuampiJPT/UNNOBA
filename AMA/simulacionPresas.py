import matplotlib.pyplot as plt

# Parámetros del modelo
a = 0.1
b = 0.02
c = 0.1
d = 0.01

# Condiciones iniciales
G0 = 60  # Población inicial de gacelas
L0 = 10  # Población inicial de leones

# Simulación utilizando el método de Euler
num_steps = 100
dt = 0.1

G = [G0]
L = [L0]

for _ in range(num_steps):
    dG_dt = a * G[-1] - b * G[-1] * L[-1]
    dL_dt = -c * L[-1] + d * G[-1] * L[-1]

    G.append(G[-1] + dt * dG_dt)
    L.append(L[-1] + dt * dL_dt)

# Visualización de las poblaciones a lo largo del tiempo
tiempo = [i * dt for i in range(num_steps + 1)]

plt.plot(tiempo, G, label='Gacelas')
plt.plot(tiempo, L, label='Leones')
plt.xlabel('Tiempo')
plt.ylabel('Población')
plt.title('Simulación de Dinámica entre Leones y Gacelas')
plt.legend()
plt.show()

