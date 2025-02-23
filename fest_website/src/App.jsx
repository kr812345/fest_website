import { useState } from 'react'
import './App.css'
import { BrowserRouter,Routes, Route } from 'react-router-dom'
import LandingPage from './Components/LandingPage';
import Events from './Components/Events';
import Gallery from './Components/Gallery';

function App() {

  return (
    <>
      <BrowserRouter>
        <Routes>
          <Route path="/" element={<LandingPage/>} />
          <Route path="/events" element={<Events/>} />
          <Route path="/gallery" element={<Gallery/>} />
        </Routes>
      </BrowserRouter>
    </>
  )
}

export default App
