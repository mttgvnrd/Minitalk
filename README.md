# 📡 Minitalk - UNIX Signal Communication  

**42 Firenze Project | Systems Programming**  
*Programma di comunicazione client-server basato su segnali UNIX (SIGUSR1/SIGUSR2) con supporto Unicode e acknowledgment*  

---

## 📜 Cosa Richiede il Progetto  

### 🎯 Parte Obbligatoria  
- **Server**:  
  - Avvio con visualizzazione PID  
  - Ricezione stringhe via segnali  
  - Supporto a client multipli consecutivi  
- **Client**:  
  - Invio stringhe al server (PID + stringa come argomenti)  
  - Comunicazione esclusiva con `SIGUSR1` e `SIGUSR2`  

### 🚀 Bonus Completati  
- **Acknowledgment**: Il server conferma la ricezione  
- **Supporto Unicode**: Trasmissione caratteri multibyte  

---

## 🛠️ Installazione & Utilizzo  
```bash
git clone https://github.com/mttgvnrd/minitalk.git
cd minitalk
make        # Compila client e server
make bonus # Compila la versione con bonus

# Terminale 1 (Server)
./server
# [Output: Server PID: 12345]

# Terminale 2 (Client)
./client 12345 "Ciao, mondo! 🚀"
# [Output su Terminale 1: "Ciao, mondo! 🚀"]
