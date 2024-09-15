import React from 'react'
import './About.css'
import theme_pattern from '../../assets/theme_pattern.svg'
import logo from '../../assets/logo.png'


const About = () => {
  return (
    <div id='about' className='about'>
      <div className="title-box">
        <h1>Our Story</h1>
        <img src={theme_pattern} alt="" />
      </div>
      <div className="about-sections">
        <div className="about-left">
            <img src={logo} alt="" />
        </div>
        <div className="about-right">
            <div className="about-para">
                <p>We started as a four friends who were broke at the time. The pocket money that we use to receive from our parents was apparently not enough for us. So we started doing odd jobs to get some extra cash in our hands. </p>
                <p>It was 5 years ago that we name our small group broqworks,  a place for broke people to Work and Hangout. Early on in our journey,  we learned that the only way to make money is by providing value and the way to make lot of money is by becoming irreplaceable and that's what broqworks stands for. Because bro it works- Believe It.</p>
            </div>
            {/* <div className="about-skills">
                <div className="about-skill"><p>MARKETING</p><hr style={{width:"70%"}} /></div>
                <div className="about-skill"><p>WEB DESIGN</p><hr style={{width:"70%"}} /></div>
                <div className="about-skill"><p>PHOTOSHOOT</p><hr style={{width:"70%"}} /></div>
                <div className="about-skill"><p>SOCIAL MEDIA</p><hr style={{width:"70%"}} /></div>
            </div> */}
        </div>
      </div>
      
      <div className="about-achievements">
        {/* <div className="about-achievement">
            <h1>10+</h1>
            <p>PEOPLE IN TEAM</p>
        </div> */}  
        {/* <hr /> */}
        
        <div className="about-achievement">
            <h1>20+</h1>
            <p>PROJECTS COMPLETED</p>
        </div>
        <hr />
        <div className="about-achievement">
            <h1>50+</h1>
            <p>HAPPY CLIENTS</p>
        </div>
      </div>
    </div>
  )
}

export default About
