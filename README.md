# AMR Shadow

> **Designing and building an Autonomous Mobile Robot software stack from first principles using ROS 2 and Modern C++.**

![Status](https://img.shields.io/badge/Status-Active%20Development-blue)
![ROS2](https://img.shields.io/badge/ROS2-Jazzy-22314E?logo=ros)
![C++](https://img.shields.io/badge/C%2B%2B-17-blue?logo=cplusplus)
![License](https://img.shields.io/badge/License-MIT-green)

---

# Overview

Shadow is my long-term robotics software engineering project focused on understanding and implementing the complete software stack of an Autonomous Mobile Robot (AMR).

The goal of this project is not to build a robot as quickly as possible, but to understand every layer that makes an autonomous robot work. Rather than assembling existing projects or following isolated tutorials, I want to design, implement, test, and document each subsystem myself while understanding the engineering decisions behind it.

This repository represents that journey.

Every feature is developed incrementally, documented, committed to version control, and integrated into a larger robotics software stack that will eventually run on a physical robot.

---

# Why Shadow?

Modern robots are much more than mechanical systems. They are collections of independent software components that continuously communicate, process sensor data, make decisions, and control hardware in real time.

A complete mobile robot typically includes components for:

- Communication
- State estimation
- Localization
- Mapping
- Path planning
- Navigation
- Motion control
- Sensor fusion
- Diagnostics
- Hardware interfaces

Each of these systems is a field of study on its own.

Instead of treating them as isolated topics, Shadow aims to bring them together into a single coherent robotics project.

---

# Project Philosophy

One of the main objectives of this repository is to learn robotics through engineering rather than implementation alone.

Every subsystem follows the same development process:

```text
Understand the Problem
        │
        ▼
Design the System
        │
        ▼
Implement in ROS2
        │
        ▼
Test in Simulation
        │
        ▼
Improve and Refactor
        │
        ▼
Deploy to Hardware
```

The emphasis is on understanding *why* a particular design is chosen before writing code.

As the project grows, the software architecture will evolve naturally through multiple engineering iterations instead of being designed all at once.

---

# Development Workflow

The project follows a simulation-first approach.

```text
Algorithm
      │
      ▼
ROS2 Node
      │
      ▼
Simulation
      │
      ▼
System Integration
      │
      ▼
Hardware Deployment
```

Every subsystem will first be implemented and validated inside simulation before interacting with physical hardware.

This makes it possible to develop, debug, and improve the software safely while maintaining a reproducible development environment.

Once the complete software stack is stable in simulation, the same architecture will be adapted to run on the physical robot with minimal changes.

---

# Long-Term Vision

The long-term objective is to build a complete Autonomous Mobile Robot software stack capable of autonomous navigation in real-world environments.

The repository will gradually grow to include:

### Core ROS2 Infrastructure

- Custom Interfaces
- Parameters
- Launch Files
- Services
- Actions
- Diagnostics

### Robot Description

- URDF
- TF2
- RViz
- Robot State Publisher

### Simulation

- Gazebo
- Differential Drive
- Wheel Odometry
- Camera
- IMU
- LiDAR

### Perception

- Sensor Drivers
- Sensor Fusion
- Computer Vision
- Environmental Awareness

### Localization & Navigation

- Extended Kalman Filter
- SLAM
- Localization
- Path Planning
- Navigation

### Hardware

- STM32 Motor Controller
- Wheel Encoders
- Motor Drivers
- PID Control
- Jetson Integration
- Physical Robot Deployment

---

# Repository Structure

```text
shadow_ws/
│
├── src/
├── docs/
├── media/
├── README.md
├── ROADMAP.md
├── CHANGELOG.md
└── LICENSE
```

The root README provides a high-level overview of the project.

As the repository grows, individual packages and subsystems will contain their own documentation describing architecture, implementation details, design decisions, and usage.

---

# Technologies

The project is being developed using:

- ROS 2
- Modern C++ (C++17)
- Ubuntu Linux
- CMake
- Git
- Gazebo
- RViz

Additional technologies will be introduced as the project evolves.

---

# Documentation

This repository is intended to document not only the final software but also the engineering process behind it.

Future documentation will include:

- Architecture diagrams
- Design decisions
- Development logs
- Simulation setup
- Hardware integration
- Performance analysis

---

# Project Status

🚧 **Active Development**

Shadow is an ongoing engineering project.

The software stack will continue to evolve through small, well-defined engineering iterations, with each subsystem being designed, implemented, validated in simulation, and eventually integrated into a physical autonomous mobile robot.

---

# License

This project is licensed under the MIT License.

See the [LICENSE](LICENSE) file for more information.
