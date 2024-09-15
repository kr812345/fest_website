import React from 'react'
import './Hero.css'
import profile_img from '../../assets/profile_img.svg'
import AnchorLink from 'react-anchor-link-smooth-scroll'
import logo from '../../assets/logo.png'


const Hero = () => {
  return (
    <div id='home' className='hero'>
      <img src={logo} alt="" className='profile-img' />
      <h1><span>We are BroqWorks</span></h1>
      <p>Leading social media marketing agency offering expert marketing, website building, social media management, and product photography services.</p>
      <div className="hero-action">
        <div className="hero-connect"><AnchorLink className='anchor-link' offset={50} href='#contact'>Connect with Us</AnchorLink></div>
        {/* <div className="hero-resume">My resume</div> */}
      </div>
    </div>
  )
}

export default Hero
