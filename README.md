# ❄️ Snow Bros — OOP Arcade Game (C++ / SFML)

A fully playable **10-level** recreation of the classic 1990 arcade game **Snow Bros**, built from scratch in **C++ with SFML 3** as a semester project for **Object-Oriented Programming** at FAST-NUCES Islamabad.

---

## 🎮 About the Game

Two snowmen brothers — **Nick** and **Tom** — fight through 10 levels of enemies to rescue the captured princesses. Throw snowballs to encase an enemy, then roll the frozen snowball into others to trigger chain reactions and rack up points.

- **10 levels** with two boss fights (Level 5 and Level 10)
- **Single-player and 2-player** mode on the same keyboard
- **Bonus levels** with gem rain
- **Login & registration** with file-based save/load that survives a restart
- **In-game shop, power-ups, and a global leaderboard**

---

## 🛠️ Tech Stack

| Component   | Technology              |
| ----------- | ----------------------- |
| Language    | C++                     |
| Graphics    | SFML 3                  |
| Persistence | File-based (text files) |
| IDE         | Visual Studio 2022      |

---

## 🧱 OOP Design

The project leans on the four OOP pillars throughout, with deep inheritance hierarchies rather than flat duplication:

- **Inheritance** — a 3-level enemy chain: `Enemy` → `Botom` → `FlyingFoogaFoog` → `Tornado`, plus bosses (`Gamakichi`, `Mogera`) and their spawned children.
- **Abstraction** — `Enemy`, `PowerUp`, and `Projectile` are abstract base classes with pure virtual methods.
- **Polymorphism** — `update()` / `draw()` are called on base-class pointers; power-ups apply their effect through a shared `applyTo(Player*)` interface.
- **Encapsulation** — entity state is private, exposed through getters/setters.

Adding a new power-up or enemy type means writing one subclass — not touching the game loop.

---

## ✨ Features

- [x] 10 playable levels (8 standard + 2 boss)
- [x] Two playable characters
- [x] Full enemy hierarchy with color variants
- [x] Snowball throw → encase → roll → chain mechanic
- [x] Power-up system (Speed Boost, Snowball Power, Distance Increase, Balloon Mode)
- [x] Star power-up choice mechanic
- [x] In-game gem shop
- [x] Boss health bars and phase-based behavior
- [x] Login / registration with hashed passwords
- [x] Save & load game state
- [x] Global leaderboard
- [x] Hitbox debug toggle (F1)

---

## ▶️ How to Run

1. Open the project in **Visual Studio 2022** (x64).
2. Make sure **SFML 3** is linked in the project settings.
3. Build and run (`F5`).
4. The `SnowBrosAssets` folder must sit next to the executable so assets load correctly.

**Controls:** Arrow keys / WASD to move and jump, Space to throw. Player 2 uses the numpad. `Esc` to pause, `F1` to toggle hitboxes.

---

## 👥 Team

This was a two-person semester project.

| Name                    | Role                                                                |
| ----------------------- | ------------------------------------------------------------------- |
| **Muhammad Habib**      | Power-up & gem systems, authentication, all game screens, shop, leaderboard |
| **Muhammad Abdullah Malik** | Enemy hierarchy, snowball/combat mechanics, level design          |

> Original shared repository: [github.com/aabdullah-malik/Snow-Bros](https://github.com/aabdullah-malik/Snow-Bros)

---

## 📄 License

Developed for academic purposes at FAST-NUCES Islamabad. Not for commercial distribution.
