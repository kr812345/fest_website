import React, { useEffect } from 'react';
import { useLocation } from 'react-router-dom';
import '../MyWorkData/MyWorkData.css'

const MyWorkData = () => {
  useEffect(() => {
    // Scroll to the top of the page on component mount
    window.scrollTo(0, 0);
  }, []);

  const location = useLocation();
  const { work } = location.state || { work: {} };

  return (
    <div className="work-details">
      <h1>{work.w_name}</h1>
      <a href={work.w_web}><img className='work-image' src={work.w_img} alt={work.w_name} /></a>
            <div className="work-description">
              <h1>Description</h1>
              <p>{work.w_desc}</p>
            </div>
                                                                        
          <div className="work-results">
            <h2>Results</h2>
            <p>{work.w_results}</p>
          </div>
    </div>
  );
};

export default MyWorkData;
