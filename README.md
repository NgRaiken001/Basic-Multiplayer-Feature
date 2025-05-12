# 🔗 Basic Multiplayer System in C++

A fundamental multiplayer architecture prototype using **C++ socket programming**, implementing real-time **client-server communication**, player synchronization, and basic gameplay networking logic. Ideal for understanding how low-level networking works in games without a game engine.

---

## 🕹️ Features

- 🖧 **Client-Server Model**: Separate processes for server and clients.
- ⏱️ **Real-Time Communication**: Handles continuous data exchange (e.g., position updates).
- 🔄 **Sync Logic**: Players see each other’s movements in real-time.
- 🚀 **Custom Protocol**: Lightweight message formatting for position/state updates.
- 🔌 **Socket Programming**: Built using low-level TCP sockets in C++.

---

## 🛠️ Tech Stack

- **C++ (Standard Library & BSD Sockets)**
- **Winsock / POSIX Sockets** (cross-platform code adaptable)
- Multi-threading (for handling multiple clients)
- Basic Serialization (custom string/message format)

---

## 📁 Project Structure

```plaintext
/MultiplayerSystem/
│
├── Server.cpp          # Accepts connections, broadcasts messages to clients
├── Client.cpp          # Connects to server, sends/receives player data
├── NetworkUtils.hpp    # Utility functions for socket setup and message handling
├── README.md
