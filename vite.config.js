import { defineConfig } from 'vite'
import tailwindcss from '@tailwindcss/vite'
import react from '@vitejs/plugin-react'

export default defineConfig({
  plugins: [
    react(),
    tailwindcss(),
  ],
  server: {
    allowedHosts: ['c4f8-2409-40d0-12e6-100c-21d2-3584-b5b-9fb6.ngrok-free.app']
  }
})