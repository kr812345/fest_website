import React, { useEffect } from 'react';
import { BrowserRouter as Router, Routes, Route } from 'react-router-dom';
import Navbar from './Components/Navbar/Navbar';
import Hero from './Components/Hero/Hero';
import About from './Components/About/About';
import Services from './Components/Services/Services';
import MyWork from './Components/MyWork/MyWork';
import Contact from './Components/Contact/Contact';
import Footer from './Components/Footer/Footer';
import Team from './Components/Team/Team';
import MyWorkData from './Components/MyWorkData/MyWorkData';
import ReadMore from './Components/ReadMore/ReadMore';
import MoreServices from './Components/MoreServices/MoreServices';
import MoreWork from './Components/MoreWork/MoreWork';
import PostClient from './Components/PastClients/PastClient';

const App = () => {
  useEffect(() => {
    // Scroll to the top of the page on component mount
    window.scrollTo(0, 0);
  }, []);
  
  return (
    <Router>
      <Navbar />
      <Routes>
        <Route path="/" element={
          <>
            <Hero />
            <About />
            <Services />
            <MyWork />
            <PostClient/>
            <Team />
            <Contact />
          </>
        } />

          <Route path='/MoreWork' element={<MoreWork/>}/>
          <Route path='/MoreServices' element={<MoreServices/>}/>
         <Route path="/ReadMore" element={<ReadMore/>} />
         <Route path="/MyWorkData" element={<MyWorkData />} />
      </Routes>
      <Footer />
    </Router>
  );
}

export default App;
