import React from 'react'
import './Footer.css'
import footer_logo from '../../assets/footer_logo.svg'
import user_icon from '../../assets/user_icon.svg'
import cr from '../../assets/cr.png'
import logo_png from '../../assets/logo_png.png'
import TC from "../../assets/Terma of Service.pdf"
import PP from "../../assets/PP.pdf"


const Footer = () => {

  let date = new Date();
  let year = date.getFullYear();

  return (
    <div className='footer'>
      <div className="footer-top">
        <div className="footer-top-left">
            <img src={logo_png} alt=""  className='footer-logo' />
            <p>Leading social media marketing agency offering expert marketing, website building, social media management, and product photography services.</p>
        </div>
        <div className="footer-top-right">
            <div className="footer-email-input">
                <img src={user_icon} alt="" />
                <input type="email" placeholder='Enter your email' />
            </div>
            <div className="footer-subscribe">Subscribe</div>
        </div>
      </div>
      <hr />
      <div className="footer-bottom">
        <p className="footer-bottom-left">© {year} Broqworks. All rights reserved.</p>
        <div className="footer-bottom-right">
            <a href={TC}><p>Term of Services</p></a>
            <a href={PP}><p>Privacy Policy</p></a>
            <p>Connect with us</p>
        </div>
      </div>
    </div>
  )
}

export default Footer
