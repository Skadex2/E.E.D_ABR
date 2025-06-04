// 9. Muestra todos los procesos actualmente en la cola de CPU
void mostrarColaCPU() {
    if (!colaCPU) {
        cout << "La cola esta vacia.\n";
    } else {
        cout << "Cola actual (ordenada por prioridad):\n";
        NodoCola* temp = colaCPU;
        while (temp) {
            cout << "ID: " << temp->id << " | Nombre: " << temp->nombre << " | Prioridad: " << temp->prioridad << "\n";
            temp = temp->siguiente;
        }
    }
    system("pause");
    system("CLS");
}
