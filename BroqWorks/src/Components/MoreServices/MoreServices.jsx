import React, { useEffect } from 'react';
import { useNavigate } from 'react-router-dom';
import './MoreServices.css';
import Services_Data from '../../assets/services_data';
import arrow_icon from '../../assets/arrow_icon.svg';

const MoreServices = () => {
    useEffect(() => {
        // Scroll to the top of the page on component mount
        window.scrollTo(0, 0);
      }, []);
      
  const navigate = useNavigate();

  const handleReadMore = (service) => {
    navigate('/ReadMore', { state: { service } });
  };

  return (
    <div id='more-services' className='more-services'>
      <h1>More Services</h1>
      <div className="services-container">
        {Services_Data.slice(4).map((service, index) => (
          <div key={index} className='services-format' onClick={() => handleReadMore(service)}>
            <h2>{service.s_name}</h2>
            <p className='description'>{service.s_desc}</p>
            <div className='services-readmore'>
              <p>Read More</p>
              <img src={arrow_icon} alt="" />
            </div>
          </div>
        ))}
      </div>
      <div className="back-to-services" onClick={() => navigate('/')}>
        <p>Back to Services</p>
        <img src={arrow_icon} alt="" />
      </div>
    </div>
  );
};

export default MoreServices;
