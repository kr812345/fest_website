import { defineConfig } from 'vite'
import tailwindcss from '@tailwindcss/vite'
import react from '@vitejs/plugin-react'

// https://vite.dev/config/
export default defineConfig({
  server: {
    allowedHosts: ['5bf6-103-208-70-49.ngrok-free.app']
  },
  plugins: [react(), tailwindcss()],
})
