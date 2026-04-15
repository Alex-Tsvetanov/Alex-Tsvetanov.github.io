# Technical Guide: 3D Scroll Implementation (Icomat/EnduroSat Style)

This guide outlines how to implement the "Z-Axis Dive" and 3D environment transitions for the Neuro-Architect portfolio, similar to the immersive experiences found on `endurosat.com` and `icomat.co.uk`.

## 1. The Core Architecture (The Stack)
To achieve this high-performance 3D scroll, use the following combination:
- **Renderer:** [Three.js](https://threejs.org/) (The industry standard for 3D on the web).
- **React Bridge (Recommended):** [React Three Fiber (R3F)](https://docs.pmnd.rs/react-three-fiber) & [Drei](https://github.com/pmnd.rs/drei).
- **Animation Engine:** [GSAP (GreenSock)](https://greensock.com/) with the **ScrollTrigger** plugin.
- **Physics/Math:** [Lenis](https://github.com/darkroomengineering/lenis) for smooth, inertial scrolling.

## 2. The "Camera-as-Navigator" Strategy
Unlike traditional websites where content moves up, in these 3D sites, the **content stays in 3D space** and the **Camera moves through it**.

### Implementation Steps:
1.  **The Canvas Overlay:** Create a fixed `canvas` that covers the entire viewport. All 3D elements (the "Neural Architecture" blueprint textures, code blocks, and portraits) live here.
2.  **Section Markers:** Use standard HTML `section` tags to define the scroll length, but set them to `pointer-events-none`.
3.  **The GSAP Timeline:** Create one master GSAP timeline that is tied to the page's scroll progress via `ScrollTrigger`.
4.  **Z-Axis Movement:** As the user scrolls, animate the `camera.position.z`. 
    - **Nexus (Home):** Camera starts at `Z: 10`.
    - **The Lab:** Camera moves to `Z: -10`, passing "through" the Home elements.
    - **The Stage:** Camera rotates and moves to `Z: -30`.

## 3. Key Visual Effects
- **Fog:** Use `THREE.FogExp2` to make elements fade in from the "distance" and fade out as the camera passes through them.
- **Parallax Layers:** Group 3D elements into layers. Moving the layers at slightly different speeds relative to the camera creates the feeling of deep, architectural space.
- **Post-Processing:** Use a `Bloom` pass for the "Neural Green" and "Electric Blue" accents to give them a high-tech glow.

## 4. Prompt for Claude Code / Developer
Use this prompt to have a coding tool implement the skeleton:

> "Build a React-based 3D scroll-driven architecture using React Three Fiber and GSAP ScrollTrigger. The goal is an immersive 'Z-axis dive' similar to endurosat.com. Create a fixed Fullscreen Canvas. Map the scroll progress to a camera movement that travels through different 3D 'scenes' (Home, Lab, Stage). Each scene should contain 3D planes for content (using the designs from the provided HTML/CSS). Implement smooth scrolling using Lenis. Ensure that as the camera passes a plane, it fades out using fog or opacity based on distance."

## 5. Transition Map for Neuro-Architect
- **Nexus → Lab:** A direct zoom-through. The hero portrait should split or dissolve into technical code lines as the camera enters the 'Lab' subspace.
- **Lab → Stage:** A 90-degree camera rotation (yaw) to signify a shift from "Internal Work" to "External Presence," moving from a terminal-style environment to a cleaner, blueprint-style space.