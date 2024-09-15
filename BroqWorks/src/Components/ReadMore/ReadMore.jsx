import React, { useEffect } from 'react';
import { useLocation } from 'react-router-dom';
import './ReadMore.css';  // Ensure you create this CSS file for styling

const ReadMore = () => {
  const location = useLocation();
  const service = location.state.service;

  useEffect(() => {
    // Scroll to the top of the page on component mount
    window.scrollTo(0, 0);
  }, []);

  return (
    <div className="readmore">
      <h1>{service.s_name}</h1>
      <img src={service.s_image} alt={service.s_name} className="service-image" />
      <p className='readmore-description'>{service.s_desc}</p>

      <div className="faq-section">
        <h2>Frequently Asked Questions</h2>
        {service.s_faqs && service.s_faqs.length > 0 ? (
          service.s_faqs.map((faq, index) => (
            <div key={index} className="faq-item">
              <h3>{faq.question}</h3>
              <p>{faq.answer}</p>
            </div>
          ))
        ) : (
          <p>No FAQs available for this service.</p>
        )}
      </div>
    </div>
  );
};

export default ReadMore;
