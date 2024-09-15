import React from 'react'
import './PastClient.css'
import theme_pattern from '../../assets/theme_pattern.svg'
import Dulogo from '../../assets/DU_LOGO.png'


const PastClient = () => {
  return (
    <div id='about' className='Past'>
      <div className="title">
        <h1>Past <span className='client'>Clients</span></h1>
        {/* <img src={theme_pattern} alt="" /> */}
      </div>
      <div className="pic_section">
            <img src={Dulogo} alt="" />            
      </div>
      </div>
  )
}

export default PastClient
